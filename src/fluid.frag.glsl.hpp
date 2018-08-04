static const char *g_shader_fragment_fluid = ""
#if defined(USE_LD)
"fluid.frag.glsl"
#else
"layout(location=0)uniform int u;"
"layout(location=5)uniform sampler2D t;"
"layout(location=6)uniform sampler2D v0;"
"layout(location=7)uniform sampler2D d;"
"in vec2 e;"
"out vec4 o;"
"vec2 f=vec2(1)/textureSize(t,0),z=.5*vec2(f),L=.5*vec2(.0,f.t),M=.5*vec2(f.s,.0),y=e+vec2(.0,f.t),k=e+vec2(0,-f.t),w=e+vec2(-f.s,.0),P=e+vec2(f.s,.0);"
"int A=0,N=A+1,U=N+20,T=U+1,S=T+1,K=S+1;"
"float b=f.s,m=.1,Y=.1;"
"vec4 X(vec4 t)"
"{"
"vec4 e=t*2.-1.;"
"if(abs(e.s)<.1)e.s=0;"
"if(abs(e.t)<.1)e.t=0;"
"if(abs(e.p)<.1)e.p=0;"
"if(abs(e.q)<.1)e.q=0;"
"return e;"
"}"
"vec4 a0(sampler2D c,sampler2D v,vec2 e,vec2 a)"
"{"
"vec4 t=X(texture(v,e)),o=texture(c,e+vec2(t.st)*f);"
"return o.st*=t.pq,o;"
"}"
"float J()"
"{"
"float c=1/b;"
"vec4 o=texture(t,e),e=texture(t,y),v=texture(t,P);"
"return c*(o.s-v.s+o.t-e.t);"
"}"
"float I()"
"{"
"float o=m/(Y*b*b),c=texture(t,y).p,v=texture(t,k).p,a=texture(t,w).p,l=texture(t,P).p,t=-o*(c+v+a+l);"
"return(texture(d,e).p-t)/(4*o);"
"}"
"vec2 H()"
"{"
"float c=m/(Y*b),o=texture(t,e).p,e=texture(t,k).p,v=texture(t,w).p;"
"return vec2(v-o,e-o)*c;"
"}"
"vec4 R(sampler2D o)"
"{"
"vec2 c=texture(o,e).st;"
"return texture(t,e-c*f*m);"
"}"
"vec4 Q(sampler2D o)"
"{"
"vec2 v=texture(o,e-M).st;"
"float a=texture(t,e-v*f*m).s;"
"vec2 l=texture(o,e-L).st;"
"float n=texture(t,e-l*f*m).t;"
"vec2 r=texture(o,e-z).st,c=texture(t,e-(r+z)*f*m).pq;"
"return vec4(a,n,c.s,c.t);"
"}"
"void main()"
"{"
"if(u<=A)"
"{"
"vec4 c=texture(d,e);"
"o=texture(t,e);"
"if(c.s!=.0)o.s=c.s;"
"if(c.t!=.0)o.t=c.t;"
"if(c.p!=.0)o.p=c.p;"
"if(c.q!=1.)o.q=c.q;"
"}"
"else if(u<=N)o.p=J();"
"else if(u<=U)o=texture(t,e),o.p=I();"
"else if(u<=T)o=texture(t,e),o.st+=H();"
"else if(u<=S)o=R(d);"
"else if(u<=K)o=Q(t);"
"else o=texture(d,e);"
"}"
#endif
"";
