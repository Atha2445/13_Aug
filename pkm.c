#include <stdio.h>

int main() {
    char crop_name[20];
    float area_of_land, water_required, budget;
    char soil_type[20];
    float pH;

    // Taking inputs from user
    printf("Enter crop name: ");
    scanf("%s", crop_name);
    printf("Enter area of land (in acres): ");
    scanf("%f", &area_of_land);
    printf("Enter soil type (colour): ");
    scanf("%s", soil_type);
    printf("Enter pH of soil: ");
    scanf("%f", &pH);

    // Calculating budget
    budget = area_of_land * 10000; // Assuming cost of cultivation is Rs. 10,000 per acre

    // Writing output to file
    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, "Crop Name: %s\n", crop_name);
    fprintf(fp, "Area of Land: %.2f acres\n", area_of_land);
    fprintf(fp, "Soil Type: %s, pH: %.2f\n", soil_type, pH);
    fprintf(fp, "Approximate Budget: Rs. %.2f\n", budget);
    fclose(fp);

    return 0;
}
