// For refernce the initial PDF syntax code is given in README.mdd
// https://github.com/mozilla/pdf.js-sample-files/blob/7dbc3700be83936e32d8df04dbb2df8024f38b59/helloworld.pdf

#include <stdio.h>
#include <string.h>
#include<conio.h>

int pdf(char name[], char school[]);

int pdf(char name[], char school[]) {
  int content_length = strlen(name) + strlen(school);
  float page_width = 595.276, page_height = 841.890;
  FILE *file;

  file = fopen("result.pdf", "wb");
  if (file == NULL) {
    printf("Error opening file.");
    return 1;
  }

  fprintf(file, "%%PDF-1.7\n");

  fprintf(file, "1 0 obj\n");
  fprintf(file, "<<\n");
  fprintf(file, "  /Type /Catalog\n");
  fprintf(file, "  /Pages 2 0 R\n");
  fprintf(file, ">>\n");
  fprintf(file, "endobj\n");

  fprintf(file, "2 0 obj\n");
  fprintf(file, "<<\n");
  fprintf(file, "  /Type /Pages\n");

  // page format
  fprintf(file, "  /MediaBox [ 0 0 %f %f ]\n", page_width, page_height);

  fprintf(file, "  /Count 1\n");
  fprintf(file, "  /Kids [ 3 0 R ]\n");
  fprintf(file, ">>\n");
  fprintf(file, "endobj\n");

  fprintf(file, "3 0 obj\n");
  fprintf(file, "<<\n");
  fprintf(file, "  /Type /Page\n");
  fprintf(file, "  /Parent 2 0 R\n");
  fprintf(file, "  /Resources <<\n");
  fprintf(file, "    /Font <<\n");
  fprintf(file, "      /F1 4 0 R\n");
  fprintf(file, "    >>\n");
  fprintf(file, "  >>\n");
  fprintf(file, "  /Contents 5 0 R\n");
  fprintf(file, ">>\n");
  fprintf(file, "endobj\n");

  fprintf(file, "4 0 obj\n");
  fprintf(file, "<<\n");
  fprintf(file, "  /Type /Font\n");
  fprintf(file, "  /Subtype /Type1\n");

  // Font name
  fprintf(file, "  /BaseFont /Helvetica\n");

  fprintf(file, ">>\n");
  fprintf(file, "endobj\n");

  fprintf(file, "5 0 obj\n");
  fprintf(file, "<<\n");
  // Text length
  fprintf(file, "  /Length %d\n", content_length);
  fprintf(file, ">>\n");
  fprintf(file, "stream\n");
  // New Text object
  //************************SCHOOL_PART************************************************
  fprintf(file, "BT\n");
  fprintf(file, "40 791 TD\n");
  fprintf(file, "/F1 30 Tf\n");
  fprintf(file, "(%s) Tj\n", school);
  fprintf(file, "ET\n");
  // New Text object
  //************************NAME_PART************************************************
  fprintf(file, "BT\n");
  fprintf(file, "/F1 12 Tf\n");
  fprintf(file, "40 730 TD\n");
  fprintf(file, "(Mr. %s..) Tj\n", name);
  fprintf(file, "ET\n");
  //**************************************************************************************
  fprintf(file, "BT\n");
  fprintf(file, "40 20 TD\n");
  fprintf(file, "/F1 17 Tf\n");
  fprintf(file, "(SAM_TIME101-2080-4-4 v1.01) Tj\n");
  fprintf(file, "ET\n");
  fprintf(file, "endstream\n");
  fprintf(file, "endobj\n");
  fprintf(file, "xref\n");
  fprintf(file, "0 6\n");
  fprintf(file, "0000000000 65535 f\n");
  fprintf(file, "0000000010 00000 n\n");
  fprintf(file, "0000000079 00000 n\n");
  fprintf(file, "0000000173 00000 n\n");
  fprintf(file, "0000000301 00000 n\n");
  fprintf(file, "0000000380 00000 n\n");
  fprintf(file, "trailer\n");
  fprintf(file, "<<\n");
  fprintf(file, "  /Size 6\n");
  fprintf(file, "  /Root 1 0 R\n");
  fprintf(file, ">>\n");
  fprintf(file, "startxref\n");
  fprintf(file, "492\n");
  fprintf(file, "%%EOF\n");

  fclose(file);
printf("THANK YOU FILE CREATED \n");
printf("Check result.pdf in current directory \n");
getch();

  return 0;
}
