/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.8.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#ifdef _MSC_VER
// disable informational message "function ... selected for automatic inline expansion"
#pragma warning (disable: 4711)
#endif

static const unsigned char qt_resource_data[] = {
  // items.txt
  0x0,0x0,0x0,0x38,
  0xe8,
  0x80,0xb3,0xe6,0x9c,0xba,0x20,0x31,0x30,0x30,0x20,0x35,0x30,0x30,0xd,0xa,0xe6,
  0x89,0x8b,0xe8,0xa1,0xa8,0x20,0x31,0x30,0x20,0x31,0x35,0xd,0xa,0xe5,0xb0,0x8f,
  0xe9,0xa9,0xac,0xe7,0x8f,0x8d,0xe7,0x8f,0xa0,0x20,0x32,0x30,0x30,0x30,0x30,0x20,
  0x31,0x31,0x35,0x34,0x31,0x35,0x35,
  
};

static const unsigned char qt_resource_name[] = {
  // res
  0x0,0x3,
  0x0,0x0,0x78,0xc3,
  0x0,0x72,
  0x0,0x65,0x0,0x73,
    // items.txt
  0x0,0x9,
  0xc,0x46,0xba,0xb4,
  0x0,0x69,
  0x0,0x74,0x0,0x65,0x0,0x6d,0x0,0x73,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/res
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/res/items.txt
  0x0,0x0,0x0,0xc,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x93,0x15,0xee,0xba,0xb5,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#if defined(QT_INLINE_NAMESPACE)
inline namespace QT_NAMESPACE {
#elif defined(QT_NAMESPACE)
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_txtResource)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_txtResource)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_txtResource)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_txtResource)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_txtResource)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_txtResource)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
