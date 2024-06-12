class ParkingSystem {
public:
    unordered_map<int, int> cars;
    ParkingSystem(int big, int medium, int small) {
        cars[1]=big;
        cars[2]=medium;
        cars[3]=small;
    }
    
    bool addCar(int carType) {
        if (cars[carType]==0) return 0;
        else{
            cars[carType]--;
            return 1;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */