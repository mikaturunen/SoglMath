

#include "UnitTest++.h"
#include "../SoglMath/Vector2.hpp"

using namespace Sogl;


TEST(Vector2_AdditionOk1) {
    const Vector2 v = Vector2(0,0) + Vector2(10, 5);
    CHECK_CLOSE(10.0f, v.x, 0.0005f);
    CHECK_CLOSE(5.0f, v.y, 0.0005f);
}

TEST(Vector2_AdditionOk2) {
    const Vector2 v = Vector2(0,0) + Vector2(-10, 2501.102f);
    CHECK_CLOSE(-10.0f, v.x, 0.0005f);
    CHECK_CLOSE(2501.102f, v.y, 0.0005f);
}

TEST(Vector2_SubstractionOk1) {
    const Vector2 v = Vector2(10,-258) - Vector2(-20, 2501.102f);
    CHECK_CLOSE(30.0f, v.x, 0.0005f);
    CHECK_CLOSE(-2759.102f, v.y, 0.0005f);
}

TEST(Vector2_SubstractionOk2) {
    const Vector2 v = Vector2(100, -100) - Vector2(10, -100);
    CHECK_CLOSE(90.0f, v.x, 0.0005f);
    CHECK_CLOSE(0.0f, v.y, 0.0005f);
}

TEST(Vector2_MultiplicationWithFloatOk1) {
    const Vector2 v = Vector2(100, -100) * 10;
    CHECK_CLOSE(1000.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1000.0f, v.y, 0.0005f);
}

TEST(Vector2_MultiplicationWithFloatOk2) {
    const Vector2 v = Vector2(-75, 12) * -120;
    CHECK_CLOSE(9000.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1440.0f, v.y, 0.0005f);
}

TEST(Vector2_DivisionWithFloatOk1) {
    const Vector2 v = Vector2(100, -100) / 10;
    CHECK_CLOSE(10.0f, v.x, 0.0005f);
    CHECK_CLOSE(-10.0f, v.y, 0.0005f);
}

TEST(Vector2_DivisionWithFloatOk2) {
    const Vector2 v = Vector2(-75, 12) / -120;
    CHECK_CLOSE(0.625f, v.x, 0.0005f);
    CHECK_CLOSE(-0.1f, v.y, 0.0005f);
}

TEST(Vector2_LengthOk1) {
    const float v = Vector2(-75, 100).Length();
    CHECK_CLOSE(125.0f, v, 0.0005f);
}

TEST(Vector2_LengthOk2) {
    const float v = Vector2(29.1235f, -95).Length();
    CHECK_CLOSE(99.3639f, v, 0.00075f);
}

TEST(Vector2_NormalizeOk1) {
    Vector2 v = Vector2(-100, 100);
    v.Normalize();
    CHECK_CLOSE(1.0f, v.Length(), 0.005f);
}

TEST(Vector2_NormalizeOk2) {
    Vector2 v = Vector2(0, 100);
    v.Normalize();
    CHECK_CLOSE(1.0f, v.Length(), 0.005f);
}

TEST(Vector2_AntiClockwisePerpedingularOk1) {
    Vector2 v = Vector2(1,0);
    v.AntiClockwisePerpedingular();
    CHECK_CLOSE(0.0f, v.x, 0.0005f);
    CHECK_CLOSE(1.0f, v.y, 0.0005f);
}

TEST(Vector2_AntiClockwisePerpedingularOk2) {
    Vector2 v = Vector2(-1.0f, -1.0f);
    v.AntiClockwisePerpedingular();
    CHECK_CLOSE(1.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
}

TEST(Vector2_AntiClockwisePerpedingularOk3) {
    Vector2 v = Vector2(1.0f, -1.0f);
    v.AntiClockwisePerpedingular();
    CHECK_CLOSE(1.0f, v.x, 0.0005f);
    CHECK_CLOSE(1.0f, v.y, 0.0005f);
}

TEST(Vector2_AntiClockwisePerpedingularOk4) {
    Vector2 v = Vector2(1.0f, 1.0f);
    v.AntiClockwisePerpedingular();
    CHECK_CLOSE(-1.0f, v.x, 0.0005f);
    CHECK_CLOSE(1.0f, v.y, 0.0005f);
}

TEST(Vector2_ClockwisePerpedingularOk1) {
    Vector2 v = Vector2(1,0);
    v.ClockwisePerpedingular();
    CHECK_CLOSE(0.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
}

TEST(Vector2_ClockwisePerpedingularOk2) {
    Vector2 v = Vector2(-1.0f, -1.0f);
    v.ClockwisePerpedingular();
    CHECK_CLOSE(-1.0f, v.x, 0.0005f);
    CHECK_CLOSE(1.0f, v.y, 0.0005f);
}

TEST(Vector2_ClockwisePerpedingularOk3) {
    Vector2 v = Vector2(1.0f, -1.0f);
    v.ClockwisePerpedingular();
    CHECK_CLOSE(-1.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
}

TEST(Vector2_ClockwisePerpedingularOk4) {
    Vector2 v = Vector2(1.0f, 1.0f);
    v.ClockwisePerpedingular();
    CHECK_CLOSE(1.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
}

TEST(Vector2_ReverseOk1) {
    Vector2 v = Vector2(1.0f, 1.0f);
    v.Reverse();
    CHECK_CLOSE(-1.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
}

TEST(Vector2_ReverseOk2) {
    Vector2 v = Vector2(-1.0f, -1.0f);
    v.Reverse();
    CHECK_CLOSE(1.0f, v.x, 0.0005f);
    CHECK_CLOSE(1.0f, v.y, 0.0005f);
}



