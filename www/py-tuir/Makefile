# $FreeBSD$

PORTNAME=	tuir
DISTVERSION=	1.29.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vulcan@wired.sh
COMMENT=	Browse Reddit from your terminal

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}beautifulsoup>=4.5.1:www/py-beautifulsoup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}decorator>=4.0.10:devel/py-decorator@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}kitchen>=1.2.4:devel/py-kitchen@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mailcap_fix>=0.1.3:devel/py-mailcap-fix@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.11.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.10.0:devel/py-six@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
