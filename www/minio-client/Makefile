# $FreeBSD$

PORTNAME=	minio-client
PORTVERSION=	${GH_TAGNAME:S/RELEASE.//:S/Z//:S/T/-/:S/-/./g}
CATEGORIES=	www

MAINTAINER=	jhixson@FreeBSD.org
COMMENT=	Replacement for ls, cp, mkdir, diff and rsync commands for filesystems

LICENSE=	APACHE20

BUILD_DEPENDS=	bash:shells/bash

USES=		go:modules

OPTIONS_DEFINE=	MC

MC_DESC=	Install as mc

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MMC}
MC=	mc
.else
MC=	${PORTNAME}
.endif

USE_GITHUB=	yes
GHTAG=		RELEASE.2020-06-16T19-24-41Z
COMMIT_ID=	975423abe2e13da84097a9ce6ce04d379d1e1155

GH_TUPLE=	minio:mc:${GHTAG}:DEFAULT \
		StackExchange:wmi:cbe66965904d:stackexchange_wmi/vendor/github.com/StackExchange/wmi \
		cheggaaa:pb:v1.0.28:cheggaaa_pb/vendor/github.com/cheggaaa/pb \
		coreos:etcd:v3.3.12:coreos_etcd/vendor/github.com/coreos/etcd \
		dgrijalva:jwt-go:v3.2.0:dgrijalva_jwt_go/vendor/github.com/dgrijalva/jwt-go \
		dustin:go-humanize:v1.0.0:dustin_go_humanize/vendor/github.com/dustin/go-humanize \
		fatih:color:v1.7.0:fatih_color/vendor/github.com/fatih/color \
		fatih:structs:v1.1.0:fatih_structs/vendor/github.com/fatih/structs \
		go-check:check:8fa46927fb4f:go_check_check/vendor/gopkg.in/check.v1 \
		go-ini:ini:v1.55.0:go_ini_ini/vendor/gopkg.in/ini.v1 \
		go-ole:go-ole:v1.2.4:go_ole_go_ole/vendor/github.com/go-ole/go-ole \
		go-yaml:yaml:v2.2.8:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		gogo:protobuf:v1.2.1:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:crypto:1d94cc7ab1c6:golang_crypto/vendor/golang.org/x/crypto \
		golang:net:d3edc9973b7e:golang_net/vendor/golang.org/x/net \
		golang:protobuf:v1.3.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:85ca7c5b95cd:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.2:golang_text/vendor/golang.org/x/text \
		google:go-genproto:24fa4b261c55:google_go_genproto/vendor/google.golang.org/genproto \
		grpc:grpc-go:v1.22.0:grpc_grpc_go/vendor/google.golang.org/grpc \
		h2non:filetype:v1.0.5:h2non_filetype/vendor/gopkg.in/h2non/filetype.v1 \
		hashicorp:errwrap:v1.0.0:hashicorp_errwrap/vendor/github.com/hashicorp/errwrap \
		hashicorp:go-multierror:v1.0.0:hashicorp_go_multierror/vendor/github.com/hashicorp/go-multierror \
		inconshreveable:go-update:8152e7eb6ccf:inconshreveable_go_update/vendor/github.com/inconshreveable/go-update \
		json-iterator:go:v1.1.9:json_iterator_go/vendor/github.com/json-iterator/go \
		klauspost:compress:v1.10.3:klauspost_compress/vendor/github.com/klauspost/compress \
		kr:text:v0.2.0:kr_text/vendor/github.com/kr/text \
		mattn:go-colorable:v0.1.4:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-isatty:v0.0.8:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.5:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
		minio:cli:v1.22.0:minio_cli/vendor/github.com/minio/cli \
		minio:minio-go:44a5f2e3b76b:minio_minio_go_v6/vendor/github.com/minio/minio-go/v6 \
		minio:minio:cccf2de129da:minio_minio/vendor/github.com/minio/minio \
		minio:sha256-simd:v0.1.1:minio_sha256_simd/vendor/github.com/minio/sha256-simd \
		mitchellh:go-homedir:v1.1.0:mitchellh_go_homedir/vendor/github.com/mitchellh/go-homedir \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		montanaflynn:stats:v0.5.0:montanaflynn_stats/vendor/github.com/montanaflynn/stats \
		ncw:directio:v1.0.5:ncw_directio/vendor/github.com/ncw/directio \
		niemeyer:pretty:a10e7caefd8e:niemeyer_pretty/vendor/github.com/niemeyer/pretty \
		pkg:profile:v1.3.0:pkg_profile/vendor/github.com/pkg/profile \
		pkg:xattr:v0.4.1:pkg_xattr/vendor/github.com/pkg/xattr \
		posener:complete:6ffe496ea953:posener_complete/vendor/github.com/posener/complete \
		rjeczalik:notify:v0.9.2:rjeczalik_notify/vendor/github.com/rjeczalik/notify \
		secure-io:sio-go:v0.3.0:secure_io_sio_go/vendor/github.com/secure-io/sio-go \
		shirou:gopsutil:53cec6b37e6a:shirou_gopsutil/vendor/github.com/shirou/gopsutil

PLIST_FILES=	bin/${MC}
GO_BUILDFLAGS=	-ldflags=" \
		-X github.com/minio/mc/cmd.Version=${GH_TAGNAME:C/RELEASE\.//:C|(..)-(..)-(..)Z|\1:\2:\3Z|} \
		-X github.com/minio/mc/cmd.ReleaseTag=${GH_TAGNAME} \
		-X github.com/minio/mc/cmd.CommitID=${COMMIT_ID} \
		-X github.com/minio/mc/cmd.GOPATH=${WRKSRC} -s -w"
GO_TARGET=	:${MC}

.include <bsd.port.mk>
