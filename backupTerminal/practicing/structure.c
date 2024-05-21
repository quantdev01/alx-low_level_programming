#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct personne{
	char nom[20];
	int age;
}Personne;
int main()
{
	Personne t[100];
	int n,i,j;
	printf("Donnez le nombre de personnes a lire:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		printf("Entrez le nom complet de la personne N%d:\t",i+1);
		gets(t[i].nom);
		printf("Entrez son age:\t");
		scanf("%d",&t[i].age);
	}
	printf("\nLe tabeau avant la suppression:\n");
	for(i=0;i<n;i++)
		printf("L'age de %s est: %d ans.\n",t[i].nom,t[i].age);

	for(i=0;i<n;i++)
	{
		if(t[i].age>=20)
		{
			for(j=i+1;j<n;j++)
			{
				strcpy(t[j-1].nom, t[j].nom);
				t[j-1].age = t[j].age;
			}
			n--;
			i--;
		}
	}
	printf("\nLe tabeau apres la suppression:\n");
	for(i=0;i<n;i++)
		printf("L'age de %s est: %d ans.\n",t[i].nom,t[i].age);
	system("pause");
	return 0;
}
