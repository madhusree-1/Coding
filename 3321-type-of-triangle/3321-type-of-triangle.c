char* triangleType(int* arr, int n) {
    int x=arr[0],y=arr[1],z=arr[2];
    if(x+y<=z || y+z<=x || x+z<=y) {
        return "none";
    }
    if(x==y && y==z) {
        return "equilateral";
    }
    else if(x==y||y==z||x==z) {
        return "isosceles";
    }
    else {
        return "scalene";
    }
}