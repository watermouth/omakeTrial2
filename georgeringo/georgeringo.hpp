#ifndef GEORGERINGO_HPP_INCLUDED
#define GEORGERINGO_HPP_INCLUDED

// libgeorgeringo.dll��ӥ�ɤ���Ȥ���GEORGERINGO.DLL���������
# if defined(_WIN32) && !defined(__GNUC__)
#   ifdef GEORGERINGO.DLL
#     define GEORGERINGO_DECL __declspec(dllexport)
#   else
#     define GEORGERINGO_DECL __declspec(dllimport)
#   endif
# endif // WIN32

# ifndef GEORGERINGO_DECL
#   define GEORGERINGO_DECL
# endif

GEORGERINGO_DECL void georgeringo();

#endif 

