# $FreeBSD$

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-symbolic

COMMENT=	FreePascal unit for simple expression parsing and evaluating

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	DOCS

.include "${MASTERDIR}/Makefile"
