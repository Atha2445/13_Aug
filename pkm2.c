#include <stdio.h>
#include <string.h>

int main()
{
    // Taking input from user
    char crop_name[50], soil_type[20];
    float land_area, soil_pH;
    printf("Enter crop name: ");
    scanf("%s", crop_name);
    printf("Enter land area in acres: ");
    scanf("%f", &land_area);
    printf("Enter soil type (color) and pH: ");
    scanf("%s %f", soil_type, &soil_pH);

    // Writing input data to a file
    FILE *fptr;
    fptr = fopen("input.txt", "w");
    fprintf(fptr, "Crop name: %s\nLand area (in acres): %.2f\nSoil type: %s\nSoil pH: %.2f\n", crop_name, land_area, soil_type, soil_pH);
    fclose(fptr);

    // Calculating seed type based on soil color and pH
    char seed_type[20];
    if(strcmp(soil_type, "black") == 0 && soil_pH >= 6.5 && soil_pH <= 7.5)
        strcpy(seed_type, "Wheat");
    else if(strcmp(soil_type, "red") == 0 && soil_pH >= 5.5 && soil_pH <= 7.0)
        strcpy(seed_type, "Rice");
    else if(strcmp(soil_type, "sandy") == 0 && soil_pH >= 6.0 && soil_pH <= 7.5)
        strcpy(seed_type, "Maize");
    else
        strcpy(seed_type, "Unknown");

    // Writing seed type to a file
    fptr = fopen("output.txt", "w");
    fprintf(fptr, "Seed type: %s\n", seed_type);

    // Calculating fertilizers and pesticides based on seed type
    char fertilizers[100], pesticides[100];
    if(strcmp(seed_type, "Wheat") == 0)
    {
        strcpy(fertilizers, "Nitrogen, Phosphorus, Potassium");
        strcpy(pesticides, "Carbaryl, Chlorpyrifos");
    }
    else if(strcmp(seed_type, "Rice") == 0)
    {
        strcpy(fertilizers, "Nitrogen, Phosphorus, Potassium, Zinc");
        strcpy(pesticides, "Imidacloprid, Bifenthrin");
    }
    else if(strcmp(seed_type, "Maize") == 0)
    {
        strcpy(fertilizers, "Nitrogen, Phosphorus, Potassium, Sulphur");
        strcpy(pesticides, "Glyphosate, Atrazine");
    }
    else
    {
        strcpy(fertilizers, "Unknown");
        strcpy(pesticides, "Unknown");
    }

    // Writing fertilizers and pesticides to a file
    fprintf(fptr, "Fertilizers: %s\nPesticides: %s\n", fertilizers, pesticides);

    // Calculating water required per day based on land area
    float water_required = land_area * 500;
    fprintf(fptr, "Water required per day (in liters): %.2f\n", water_required);

    // Writing prevention tips to a file
    fprintf(fptr, "Preventions:\n- Use disease-free and healthy seeds\n- Avoid excess use of fertilizers and pesticides\n- Practice proper water management\n");

    // Calcul
}
