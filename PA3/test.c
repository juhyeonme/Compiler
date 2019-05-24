struct student{
	int ID;
	char name[32];
};
int stuInfo(struct student stu[4]){
	int i;
	for(i=0;i<=3;i++){
		printf("ID: %d, Name: %s\n", stu[i].ID, stu[i].name);
	}
	return 1;
}
