int compare(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}
int minMovesToSeat(int* seats, int seatsSize, int* students, int studentsSize) {
    qsort(seats,seatsSize,sizeof(seats[0]),compare);
    qsort(students,studentsSize,sizeof(students[0]),compare);
    int sum=0;
    for(int i=0,j=0;i<seatsSize,j<studentsSize;i++,j++){
        sum+=abs(seats[i]-students[j]);
    }
    return sum;
}