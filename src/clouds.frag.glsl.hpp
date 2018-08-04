static const char *g_shader_fragment_clouds = ""
#if defined(USE_LD)
"clouds.frag.glsl"
#else
"layout(location=0)uniform vec3 u[5];"
"layout(location=6)uniform sampler2D V0;"
"layout(location=7)uniform sampler2D S0;"
"layout(location=8)uniform sampler3D J0;"
"layout(location=9)uniform sampler3D z;"
"layout(location=10)uniform mat3 K;"
"vec3 k=normalize(vec3(.56,.35,.69)),v0=normalize(vec3(-.8,.7,.9)),J=vec3(.0,.0,-3500.),b=vec3(30000.,300000.,-1000000.),w=vec3(.0,15500.,.0),a0=normalize(w-b),M=vec3(.0,50000.,.0),L0=normalize(M-b),l0=vec3(-17000.,40000.,22000.),f0=vec3(-1000.,42000.,28000.),n0=vec3(10000.,25000.,2000.),I=vec3(2000.,50000.,-2000.),H=vec3(.0,51000.,-2500.),U=vec3(-2500.,50000.,.0),T0=normalize(l0-I),C0=normalize(f0-H),Y0=normalize(n0-U);"
"float h=50,T=7400,r0=14050,M0=222222222,S=1500,R=1500,s0=14000,Q=27000,i0=1100,P=36000,K0=32000,X0=36000,u0=7000.*smoothstep(K0,X0,u[4].s),m0=7000.*(1.+smoothstep(P,P+7000.,u[4].s)*.4);"
"in vec3 f;"
"out vec4 o;"
"float m(vec3 e)"
"{"
"float t=G(e,J,v0,h),o=g(e,J,T,r0);"
"return max(t,o);"
"}"
"float q(vec3 t)"
"{"
"vec3 e=t*.000004;"
"float v=3.7,a=-.39,o=1,c=0;"
"for(int t=0;"
"t<3;"
"++t)c+=(texture(z,e).s-.1)*o,o*=a,e=K*e*v;"
"return c*255.+max(t.t*.03,-77.);"
"}"
"vec3 Y=w;"
"float X=u0;"
"float L(vec3 t)"
"{"
"vec3 e=t*.000009;"
"float v=2.7,a=-.47,o=1,c=0;"
"for(int t=0;"
"t<4;"
"++t)c+=(texture(z,e).s-.1)*o,o*=a,e=K*e*v;"
"float l=length(t-Y)/max(X,1.);"
"return c*277.-211.+l*222.;"
"}"
"vec2 p0(vec3 e,vec3 a)"
"{"
"vec3 l=e;"
"vec2 o=vec2(0);"
"for(int v=0;"
"v<333;"
"++v)"
"{"
"float f=length(e-Y);"
"if(f>X)break;"
"float t=L(e);"
"if(t<.0)"
"{"
"float v=.0007,a=abs(t)*.0005;"
"vec2 c=vec2(1444.,.0);"
"vec3 l=normalize(vec3(L(e+c.stt),L(e+c.tst),L(e+c.tts))-t);"
"float e=dot(l,k)*.5+.5;"
"o+=vec2(e,1.)*(v+a);"
"if(o.t>=1.)break;"
"}"
"l=e,e+=a*(abs(t)+h*.5);"
"}"
"return o;"
"}"
"vec3 s=b,n=a0;"
"float A=(u[4].s-Q)*11.,A0=930000.+A,N0=1010000.+A;"
"float d(vec3 e)"
"{"
"vec3 t=e*.00004;"
"float a=2.7,l=-.49,o=1,c=0;"
"for(int e=0;"
"e<3;"
"++e)c+=(texture(z,t).s-.1)*o,o*=l,t=K*t*a;"
"vec3 f=e-s;"
"float v=dot(n,f),r=length(e-(s+v*n)),n=r*(.18+smoothstep(A0,N0,v)*2);"
"return c*155.-188.+n;"
"}"
"vec2 N(vec3 e,vec3 a)"
"{"
"vec3 l=e;"
"vec2 o=vec2(0);"
"for(int v=0;"
"v<333;"
"++v)"
"{"
"vec3 f=e-s;"
"float r=length(e-(s+dot(n,f)*n));"
"if(r>R)break;"
"float t=d(e);"
"if(t<.0)"
"{"
"float v=.001,a=abs(t)*.0009;"
"vec2 c=vec2(222.,.0);"
"vec3 l=normalize(vec3(d(e+c.stt),d(e+c.tst),d(e+c.tts))-t);"
"float e=dot(l,k)*.5+.5;"
"o+=vec2(e,1.)*(v+a);"
"if(o.t>=1.)break;"
"}"
"l=e,e+=a*(abs(t)+h*.5);"
"}"
"return o;"
"}"
"vec3 I0(vec3 t,vec3 o)"
"{"
"vec3 e=mix(t,o,.5);"
"for(int c=0;"
"c<5;"
"++c)"
"{"
"float v=q(e);"
"if(v<.0)o=e;"
"else t=e;"
"e=(t+o)*.5;"
"}"
"return e;"
"}"
"vec3 y(vec3 t,vec3 o)"
"{"
"vec3 e=mix(t,o,.5);"
"for(int c=0;"
"c<5;"
"++c)"
"{"
"float v=m(e);"
"if(v<.0)o=e;"
"else t=e;"
"e=(t+o)*.5;"
"}"
"return e;"
"}"
"float U0(vec3 e)"
"{"
"float t=.2,o=0;"
"for(float c=0;"
"c<1.;"
"c+=t)"
"{"
"float v=q(e);"
"if(v>.0)break;"
"o+=t,e+=(abs(v)+h)*k;"
"}"
"return o;"
"}"
"void main()"
"{"
"vec4 x=vec4(0),V=vec4(0),i=vec4(0);"
"vec3 t=normalize(f),e=u[0],j=e,F=e;"
"vec2 l=vec2(0),v=vec2(0);"
"float E=0,f=0,C=0;"
"bool B=false,d=false,g=false;"
"float a=120000,L=44444,K=8888,r=u[4].s;"
"if(r>=s0&&r<=Q)"
"{"
"vec3 c=mix(b,w,.829+(r-s0)*.0000026);"
"vec4 v=q0(e,t,c,i0);"
"if(v.q!=0)"
"{"
"mat3 a=transpose(mat3(-.408289,-.889558,.204907,-.0877096,.261659,.961167,-.908629,.374462,-.184855));"
"vec3 l=(v.stp-c)/i0;"
"vec4 e,c=P0(l,t,k,a,.35,z,e);"
"e.stp=normalize(transpose(a)*e.stp),C=smoothstep(-.045,-.0,-e.q)*max(dot(e.stp,a0)*.7+.3,.0),i=vec4(1.,1.,.95,1.)*C;"
"if(c.q>.0)"
"{"
"V=c,o=V*(1.-i.q)+i;"
"return ;"
"}"
"}"
"}"
"for(int V=0;"
"V<222;"
"++V)"
"{"
"if(f>=a)break;"
"float i=a,m=a,x=a,z=a,y=a,D=a,G=a,o;"
"if(e.t>K)"
"{"
"o=(e.t-K)/abs(t.t);"
"if(r>Q)"
"{"
"if(r<P)"
"{"
"if(!d)i=c(e,w,u0);"
"if(!g)x=p(e,b,w,R),m=x;"
"}"
"else"
"{"
"if(!d)i=c(e,M,m0);"
"if(!g)z=p(e,b,M,R),y=p(e,I,l0,S),D=p(e,H,f0,S),G=p(e,U,n0,S),m=min(z,min(y,min(D,G)));"
"}"
"}"
"}"
"else o=q(e);"
"float c=min(o,min(m,i));"
"if(o<.0)"
"{"
"float c=.0017,v=abs(o)*.0017;"
"if(l.t<=.0)j=e;"
"vec2 t=vec2(1777.,.0);"
"vec3 o=normalize(vec3(q(e+t.stt),q(e+t.tst),q(e+t.tts)));"
"float e=dot(o,k)*.5+.5;"
"l+=vec2(e,1.)*(c+v);"
"if(l.t>=1.)"
"{"
"l/=l.t;"
"break;"
"}"
"}"
"else if(i<.0)"
"{"
"if(r<P)v+=p0(e,t);"
"else Y=M,X=m0,v+=p0(e,t);"
"if(v.t>=1.)"
"{"
"v/=v.t;"
"break;"
"}"
"d=true;"
"}"
"else if(m<.0)"
"{"
"if(x<.0)v+=N(e,t);"
"else if(z<.0)n=L0,v+=N(e,t);"
"else"
"{"
"A=(u[4].s-P)*2,A0=A,N0=25000.+A;"
"if(y<.0)n=T0,s=I,v+=N(e,t);"
"else if(D<.0)n=C0,s=H,v+=N(e,t);"
"else if(G<.0)n=Y0,s=U,v+=N(e,t);"
"}"
"if(v.t>=1.)"
"{"
"v/=v.t;"
"break;"
"}"
"g=true;"
"}"
"F=e,E=c;"
"float v=abs(c)+h;"
"f+=v,e+=t*v;"
"}"
"f=min(f,a);"
"vec3 n=vec3(.68,.69,.56),b=vec3(.12,.12,.08),q=vec3(.8,.6,.6),k=vec3(1.2,1.15,1.1),w=mix(q,k,v.s);"
"vec4 s=vec4(w*v.s,sqrt(v.t));"
"vec3 P=vec3(.91,.71,.46),A=mix(n,P,l.s);"
"vec4 u=vec4(A*l.s,l.t);"
"float U=pow(f/a,1.);"
"u*=1.-U,x=u*(1.-s.q)+s;"
"vec3 N=vec3(.87,.76,.55)*(t.t*.3+.7);"
"float p=t.t*.5+.5;"
"vec4 c=mix(vec4(n,1.),vec4(.0,.0,.0,.1),p)*(.98+texture(z,t*.8).s*.02);"
"if(t.t<-.333333)c=mix(vec4(b,1.),c,3*p);"
"c.stp=mix(N,c.stp,min(f,L)/L),o=(c*(1.-x.q)+x)*(1.-i.q)+i;"
"if(o.q<1.)"
"{"
"vec3 e=vec3(0),v=e;"
"float l=0;"
"for(int a=0;"
"a<24;"
"++a)"
"{"
"if(dot(e,e)>M0)break;"
"float c=m(e);"
"if(c<.0)"
"{"
"vec3 c=y(v,e);"
"float e=(1.-abs(dot(t,v0)))/444.+length(c)/2222220.;"
"vec4 t=textureGrad(V0,vec2((length(c-J)-T)/(r0-T),.0),vec2(e),vec2(e));"
"o=t*pow(1.-o.q,2.4)+o;"
"break;"
"}"
"v=e,l=c,e+=t*(abs(c)+h);"
"}"
"}"
"}"
#endif
"";
