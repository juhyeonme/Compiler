struct student{
	int ID;
	char name[32];
	char a = 'A';
	char b = '/';
	char c = '\n';
	char d = '\0';
	char e = '\"';
	char f = '\?';
	float e = 3.14159;
	int g = 0123;
	int h = 013;
	int j = 0x1Af;
};
int stuInfo(struct student stu[4]){
	int i, num = 3;
	for(i=0;i<=num;i++){
		printf("ID: %d, Name: %s\n", stu[i].ID, stu[i].name);
	}
	return 1;
}
