#pragma once

#include "UnitTest++.h"
#include "../SoglMath/Vector3.hpp"

using namespace Sogl;


TEST(Vector3_AdditionOk1) {
    const Vector3 v = Vector3(0,0,0) + Vector3(10, 5, 15);
    CHECK_CLOSE(10.0f, v.x, 0.0005f);
    CHECK_CLOSE(5.0f, v.y, 0.0005f);
    CHECK_CLOSE(15.0f, v.z, 0.0005f);
}

TEST(Vector3_AdditionOk2) {
    const Vector3 v = Vector3(0,0,0) + Vector3(-10, 2501.102f, 90);
    CHECK_CLOSE(-10.0f, v.x, 0.0005f);
    CHECK_CLOSE(2501.102f, v.y, 0.0005f);
    CHECK_CLOSE(90.0f, v.z, 0.0005f);
}

TEST(Vector3_SubstractionOk1) {
    const Vector3 v = Vector3(10,-258,0) - Vector3(-20, 2501.102f, 0);
    CHECK_CLOSE(30.0f, v.x, 0.0005f);
    CHECK_CLOSE(-2759.102f, v.y, 0.0005f);
    CHECK_CLOSE(0.0f, v.z, 0.0005f);
}

TEST(Vector3_SubstractionOk2) {
    const Vector3 v = Vector3(100, -100, 0) - Vector3(10, -100, 1000);
    CHECK_CLOSE(90.0f, v.x, 0.0005f);
    CHECK_CLOSE(0.0f, v.y, 0.0005f);
    CHECK_CLOSE(-1000.0f, v.z, 0.0005f);
}

TEST(Vector3_MultiplicationWithFloatOk1) {
    const Vector3 v = Vector3(100, -100, 0) * 10.0f;
    CHECK_CLOSE(1000.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1000.0f, v.y, 0.0005f);
    CHECK_CLOSE(0.0f, v.z, 0.0005f);
}

TEST(Vector3_MultiplicationWithFloatOk2) {
    const Vector3 v = Vector3(100, -100, 0) * 100.0f;
    CHECK_CLOSE(10000.0f, v.x, 0.0005f);
    CHECK_CLOSE(-10000.0f, v.y, 0.0005f);
    CHECK_CLOSE(0.0f, v.z, 0.0005f);
}

TEST(Vector3_DivisionWithFloatOk1) {
    const Vector3 v = Vector3(100, -100, 0) / 10.0f;
    CHECK_CLOSE(10.0f, v.x, 0.0005f);
    CHECK_CLOSE(-10.0f, v.y, 0.0005f);
    CHECK_CLOSE(0.0f, v.z, 0.0005f);
}

TEST(Vector3_DivisionWithFloatOk2) {
    const Vector3 v = Vector3(100, -100, 0) / 100.0f;
    CHECK_CLOSE(1.0f, v.x, 0.0005f);
    CHECK_CLOSE(-1.0f, v.y, 0.0005f);
    CHECK_CLOSE(0.0f, v.z, 0.0005f);
}

TEST(Vector3_LengthOk1) {
    const float v = Vector3(10,10,10).Length();
    CHECK_CLOSE(17.3205f, v, 0.005f);
}

TEST(Vector3_LengthOk2) {
    const float v = Vector3(-25,10,48).Length();
    CHECK_CLOSE(55.036f, v, 0.005f);
}

TEST(Vector3_NormalizeOk1) {
    Vector3 v = Vector3(10,10,10);
    v.Normalize();
    CHECK_CLOSE(1.0f, v.Length(), 0.005f);
}

TEST(Vector3_NormalizeOk2) {
    Vector3 v = Vector3(-25,10,48);
    v.Normalize();
    CHECK_CLOSE(1.0f, v.Length(), 0.005f);
}


TEST(Vector3_CrossOk1) {
    const Vector3 v = Vector3::Cross(Vector3(10,10,0), Vector3(10,0,0));
    CHECK_CLOSE(0.0f, v.x, 0.005f);
    CHECK_CLOSE(0.0f, v.y, 0.005f);
    CHECK_CLOSE(-100.0f, v.z, 0.005f);
}

TEST(Vector3_CrossOk2) {
    const Vector3 v = Vector3::Cross(Vector3(100,10,-10), Vector3(10,0,-90));
    CHECK_CLOSE(-900.0f, v.x, 0.005f);
    CHECK_CLOSE(8900.0f, v.y, 0.005f);
    CHECK_CLOSE(-100.0f, v.z, 0.005f);
}

TEST(Vector3_DotOk1) {
    const float v = Vector3::Dot(Vector3(10,10,0), Vector3(10,0,0));
    CHECK_CLOSE(100.0f, v, 0.005f);
}

TEST(Vector3_DotOk2) {
    const float v  = Vector3::Dot(Vector3(100,10,-10), Vector3(10,0,-90));
    CHECK_CLOSE(1900.0f, v, 0.005f);
}

