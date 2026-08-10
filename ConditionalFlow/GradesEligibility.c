#include <stdio.h>

void ShowEligibilityCriteria(){
    printf("Eligibility Criteria :\n");   
    printf("Marks in Maths >=65\n");
    printf("and Marks in Phy >=55\n");
    printf("and Marks in Chem>=50\n");
    printf("and Total in all three subject >=190\n");
    printf("or Total in Maths and Physics >=140\n");
    printf("-------------------------------------\n");
}

void DataProcessing(float Physics, float Chemistry, float Mathematics, float Total_on_three, float total_math_and_physics){	

	if (Mathematics >= 65)   
        if (Physics >= 55) 
            if (Chemistry >= 50) 
                if ((Mathematics + Physics + Chemistry) >= 190 || (Mathematics + Physics) >= 140)  
                    printf("The candidate is eligible for admission.\n");
                else
                    printf("The candidate is not eligible.\n"); 
            else
                printf("The candidate is not eligible.\n"); 
        else
            printf("The candidate is not eligible.\n"); 
    else
        printf("The candidate is not eligible.\n"); 
}


int main(){
	
	float Physics, Chemistry, Mathematics, Total_on_three, total_math_and_physics;
	
	printf("Type the marks obtained in Physics: ");
	scanf("%f", &Physics);

	printf("Type the marks obtained in Mathematics: ");
	scanf("%f", &Mathematics);
	
	printf("Type the marks obtained in Chemistry: ");
	scanf("%f", &Chemistry);	
	
	printf("Total marks of three subjects together: %.2f\n", Mathematics + Physics + Chemistry);
	printf("Total marks of Math and Physics: %.2f.\n", Mathematics + Physics);
	
	ShowEligibilityCriteria();
	DataProcessing(Physics, Chemistry, Mathematics, Total_on_three, total_math_and_physics);
	
	
}
