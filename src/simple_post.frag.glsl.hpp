static const char *g_shader_fragment_simple_post = ""
#if defined(USE_LD)
"simple_post.frag.glsl"
#else
"layout(location=5)uniform sampler2D z;"
"layout(location=7)uniform sampler2D T;"
"layout(location=8)uniform sampler3D A;"
"layout(location=9)uniform samplerCube U;"
"layout(location=10)uniform vec2 L[96];"
"in vec3 f;"
"in vec2 t;"
"in vec2 e;"
"in vec2 n;"
"in vec2 s;"
"in vec2 u;"
"in vec2 m;"
"out vec4 o;"
"void main()"
"{"
"vec3 a=normalize(f);"
"vec4 f=vec4(texture(U,a).stp*.4,1.);"
"float c=1;"
"for(int t=0;"
"t<96;"
"++t)"
"{"
"float o=pow(smoothstep(.95,1.,1.-abs(e.s-L[t].s*122.)),.1);"
"c=max(c,o*22.);"
"}"
"vec2 r=floor(e/t/c)*c*t,i=floor(n/t/c)*c*t,n=floor(s/t/c)*c*t,s=floor(u/t/c)*c*t,u=floor(m/t/c)*c*t;"
"vec4 v=W(z,t,r,i,n,s,u);"
"float m=floor(mod(e.t/t.t,2.))*.06;"
"v+=min(G0(z,t,e)*m,vec4(.4));"
"float p=texture(A,a*8.).s;"
"vec4 l=vec4(p*.2*length(e-.5)),e=(1.-l.q)*f+l;"
"o=(1.-v.q)*e+v;"
"}"
#endif
"";
