// This is a generated source file for Chilkat version 9.5.0.65
#ifndef _C_CkMht_H
#define _C_CkMht_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"


CK_VISIBLE_PUBLIC void CkMht_setAbortCheck(HCkMht cHandle, BOOL (*fnAbortCheck)());
CK_VISIBLE_PUBLIC void CkMht_setPercentDone(HCkMht cHandle, BOOL (*fnPercentDone)(int pctDone));
CK_VISIBLE_PUBLIC void CkMht_setProgressInfo(HCkMht cHandle, void (*fnProgressInfo)(const char *name, const char *value));
CK_VISIBLE_PUBLIC void CkMht_setTaskCompleted(HCkMht cHandle, void (*fnTaskCompleted)(HCkTask hTask));

CK_VISIBLE_PUBLIC HCkMht CkMht_Create(void);
CK_VISIBLE_PUBLIC void CkMht_Dispose(HCkMht handle);
CK_VISIBLE_PUBLIC BOOL CkMht_getAbortCurrent(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putAbortCurrent(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkMht_getBaseUrl(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putBaseUrl(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_baseUrl(HCkMht cHandle);
CK_VISIBLE_PUBLIC int CkMht_getConnectTimeout(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putConnectTimeout(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkMht_getDebugHtmlAfter(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putDebugHtmlAfter(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_debugHtmlAfter(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getDebugHtmlBefore(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putDebugHtmlBefore(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_debugHtmlBefore(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getDebugLogFilePath(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putDebugLogFilePath(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_debugLogFilePath(HCkMht cHandle);
CK_VISIBLE_PUBLIC BOOL CkMht_getDebugTagCleaning(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putDebugTagCleaning(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getEmbedImages(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putEmbedImages(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getEmbedLocalOnly(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putEmbedLocalOnly(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getFetchFromCache(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putFetchFromCache(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkMht_getHeartbeatMs(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putHeartbeatMs(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getIgnoreMustRevalidate(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putIgnoreMustRevalidate(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getIgnoreNoCache(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putIgnoreNoCache(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkMht_getLastErrorHtml(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkMht_lastErrorHtml(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getLastErrorText(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkMht_lastErrorText(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getLastErrorXml(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkMht_lastErrorXml(HCkMht cHandle);
CK_VISIBLE_PUBLIC BOOL CkMht_getLastMethodSuccess(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putLastMethodSuccess(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getNoScripts(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putNoScripts(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getNtlmAuth(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putNtlmAuth(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkMht_getNumCacheLevels(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putNumCacheLevels(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkMht_getNumCacheRoots(HCkMht cHandle);
CK_VISIBLE_PUBLIC BOOL CkMht_getPreferIpv6(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putPreferIpv6(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getPreferMHTScripts(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putPreferMHTScripts(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkMht_getProxy(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putProxy(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_proxy(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getProxyLogin(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putProxyLogin(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_proxyLogin(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getProxyPassword(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putProxyPassword(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_proxyPassword(HCkMht cHandle);
CK_VISIBLE_PUBLIC int CkMht_getReadTimeout(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putReadTimeout(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getRequireSslCertVerify(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putRequireSslCertVerify(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkMht_getSocksHostname(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putSocksHostname(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_socksHostname(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getSocksPassword(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putSocksPassword(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_socksPassword(HCkMht cHandle);
CK_VISIBLE_PUBLIC int CkMht_getSocksPort(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putSocksPort(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkMht_getSocksUsername(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putSocksUsername(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_socksUsername(HCkMht cHandle);
CK_VISIBLE_PUBLIC int CkMht_getSocksVersion(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putSocksVersion(HCkMht cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUnpackDirect(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUnpackDirect(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUnpackUseRelPaths(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUnpackUseRelPaths(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUpdateCache(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUpdateCache(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUseCids(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUseCids(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUseFilename(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUseFilename(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUseIEProxy(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUseIEProxy(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUseInline(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUseInline(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getUtf8(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putUtf8(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkMht_getVerboseLogging(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_putVerboseLogging(HCkMht cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkMht_getVersion(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkMht_version(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getWebSiteLogin(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putWebSiteLogin(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_webSiteLogin(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getWebSiteLoginDomain(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putWebSiteLoginDomain(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_webSiteLoginDomain(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_getWebSitePassword(HCkMht cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkMht_putWebSitePassword(HCkMht cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkMht_webSitePassword(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_AddCacheRoot(HCkMht cHandle, const char *dir);
CK_VISIBLE_PUBLIC void CkMht_AddCustomHeader(HCkMht cHandle, const char *name, const char *value);
CK_VISIBLE_PUBLIC void CkMht_AddExternalStyleSheet(HCkMht cHandle, const char *url);
CK_VISIBLE_PUBLIC void CkMht_ClearCustomHeaders(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_ExcludeImagesMatching(HCkMht cHandle, const char *pattern);
CK_VISIBLE_PUBLIC BOOL CkMht_GetAndSaveEML(HCkMht cHandle, const char *url_or_htmlFilepath, const char *emlPath);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetAndSaveEMLAsync(HCkMht cHandle, const char *url_or_htmlFilepath, const char *emlPath);
CK_VISIBLE_PUBLIC BOOL CkMht_GetAndSaveMHT(HCkMht cHandle, const char *url_or_htmlFilepath, const char *mhtPath);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetAndSaveMHTAsync(HCkMht cHandle, const char *url_or_htmlFilepath, const char *mhtPath);
CK_VISIBLE_PUBLIC BOOL CkMht_GetAndZipEML(HCkMht cHandle, const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetAndZipEMLAsync(HCkMht cHandle, const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);
CK_VISIBLE_PUBLIC BOOL CkMht_GetAndZipMHT(HCkMht cHandle, const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetAndZipMHTAsync(HCkMht cHandle, const char *url_or_htmlFilepath, const char *zipEntryFilename, const char *zipFilename);
CK_VISIBLE_PUBLIC BOOL CkMht_GetCacheRoot(HCkMht cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkMht_getCacheRoot(HCkMht cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkMht_GetEML(HCkMht cHandle, const char *url_or_htmlFilepath, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkMht_getEML(HCkMht cHandle, const char *url_or_htmlFilepath);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetEMLAsync(HCkMht cHandle, const char *url_or_htmlFilepath);
CK_VISIBLE_PUBLIC BOOL CkMht_GetMHT(HCkMht cHandle, const char *url_or_htmlFilepath, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkMht_getMHT(HCkMht cHandle, const char *url_or_htmlFilepath);
CK_VISIBLE_PUBLIC HCkTask CkMht_GetMHTAsync(HCkMht cHandle, const char *url_or_htmlFilepath);
CK_VISIBLE_PUBLIC BOOL CkMht_HtmlToEML(HCkMht cHandle, const char *htmlText, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkMht_htmlToEML(HCkMht cHandle, const char *htmlText);
CK_VISIBLE_PUBLIC HCkTask CkMht_HtmlToEMLAsync(HCkMht cHandle, const char *htmlText);
CK_VISIBLE_PUBLIC BOOL CkMht_HtmlToEMLFile(HCkMht cHandle, const char *html, const char *emlFilename);
CK_VISIBLE_PUBLIC HCkTask CkMht_HtmlToEMLFileAsync(HCkMht cHandle, const char *html, const char *emlFilename);
CK_VISIBLE_PUBLIC BOOL CkMht_HtmlToMHT(HCkMht cHandle, const char *htmlText, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkMht_htmlToMHT(HCkMht cHandle, const char *htmlText);
CK_VISIBLE_PUBLIC HCkTask CkMht_HtmlToMHTAsync(HCkMht cHandle, const char *htmlText);
CK_VISIBLE_PUBLIC BOOL CkMht_HtmlToMHTFile(HCkMht cHandle, const char *html, const char *mhtFilename);
CK_VISIBLE_PUBLIC HCkTask CkMht_HtmlToMHTFileAsync(HCkMht cHandle, const char *html, const char *mhtFilename);
CK_VISIBLE_PUBLIC BOOL CkMht_IsUnlocked(HCkMht cHandle);
CK_VISIBLE_PUBLIC void CkMht_RemoveCustomHeader(HCkMht cHandle, const char *name);
CK_VISIBLE_PUBLIC void CkMht_RestoreDefaults(HCkMht cHandle);
CK_VISIBLE_PUBLIC BOOL CkMht_SaveLastError(HCkMht cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkMht_UnlockComponent(HCkMht cHandle, const char *unlockCode);
CK_VISIBLE_PUBLIC BOOL CkMht_UnpackMHT(HCkMht cHandle, const char *mhtFilename, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);
CK_VISIBLE_PUBLIC BOOL CkMht_UnpackMHTString(HCkMht cHandle, const char *mhtString, const char *unpackDir, const char *htmlFilename, const char *partsSubDir);
#endif
