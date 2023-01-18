/**
 * @param {number} big
 * @param {number} medium
 * @param {number} small
 */

class ParkingSystem{
    constructor(big,medium,small){
        this.big=big;
        this.medium=medium;
        this.small=small;
    }
    addCar(x){
        if(x==1 && this.big!=0){
            this.big=this.big-1;
            return true
        }else if(x==2 && this.medium!=0){
            this.medium=this.medium-1;
            return true
        }
        else if(x==3 &&  this.small!=0){
            this.small=this.small-1
            return true
        }else{
            return false
        }

    }

}
//var ParkingSystem = function(big, medium, small) {
//    var obj = new ParkingSystem(big, medium, small)
//   
//
//};

/** 
 * @param {number} carType
 * @return {boolean}
 */
//ParkingSystem.prototype.addCar = function(carType) {
//    
//};

/** 
 * Your ParkingSystem object will be instantiated and called as such:
 * var obj = new ParkingSystem(big, medium, small)
 * var param_1 = obj.addCar(carType)
 */