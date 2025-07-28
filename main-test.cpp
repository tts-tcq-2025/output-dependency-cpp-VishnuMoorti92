#include "gtest/gtest.h"

void testTshirtSize();
void testPrintColorMap();
void testWeatherReport();

TEST(TShirt, Size) {
    testTshirtSize();
    testTshirtSize1();
    testTshirtSize2();
}

TEST(ColorMap, Print) {
    testPrintColorMap();
}

TEST(WeatherReport, Report) {
    testWeatherReport();
}
