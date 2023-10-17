//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (UIDocumentPicker)
+ (id)ui_incomingDirectory:(_Bool)arg1;	// IMP=0x002000000056d2cb
+ (id)ui_URLFromExportBookmark:(id)arg1;	// IMP=0x002000000056d1e7
+ (id)ui_cloudDocsContainerURL;	// IMP=0x002000000056d0f8
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00200000006d1751
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;	// IMP=0x00200000006d115f
+ (id)mapsURLWithQuery:(id)arg1;	// IMP=0x00200000006d1068
+ (void)_setAllowsCreationOfFileURLFromItemProvider:(_Bool)arg1;	// IMP=0x0020000000bc20e4
+ (_Bool)_allowsCreationOfFileURLFromItemProvider;	// IMP=0x0020000000bc20b9
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;	// IMP=0x001000000056da23
- (id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2;	// IMP=0x001000000056d9c7
- (id)ui_downloadOperationForActivity:(id)arg1;	// IMP=0x001000000056d98f
- (id)ui_resolveOnDiskBookmarkAndPromise;	// IMP=0x001000000056d94e
- (void)ui_scheduleForCleanup;	// IMP=0x001000000056d586
- (id)ui_bookmarkForExportWithError:(id *)arg1;	// IMP=0x001000000056d100
- (_Bool)ui_isContentManaged;	// IMP=0x001000000056d0ae
- (void)ui_setIsContentManaged:(_Bool)arg1;	// IMP=0x001000000056d054
- (_Bool)ui_isUnfulfilledPromiseURL;	// IMP=0x001000000056cf38
- (_Bool)ui_canOpenInPlace;	// IMP=0x001000000056cf26
- (void)ui_setIsFileProviderURL:(_Bool)arg1;	// IMP=0x001000000056cdf6
- (_Bool)ui_isFileProviderURL;	// IMP=0x001000000056cccb
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;	// IMP=0x001000000056cc60
- (_Bool)ui_hasReadSandboxExtended;	// IMP=0x001000000056cc44
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;	// IMP=0x001000000056ca4c
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;	// IMP=0x001000000056ca2d
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;	// IMP=0x001000000056ca0e
- (_Bool)isHTTPOrHTTPSURL;	// IMP=0x00100000006d1bf2
- (_Bool)isJavaScriptURL;	// IMP=0x00100000006d1b9a
- (_Bool)isAccountURL;	// IMP=0x00100000006d1b3d
- (_Bool)isWebcalURL;	// IMP=0x00100000006d1a29
- (_Bool)isSpringboardHandledURL;	// IMP=0x00100000006d19c2
- (id)searchResultIdentifier;	// IMP=0x00100000006d18cd
- (id)searchResultDomain;	// IMP=0x00100000006d17cd
- (id)radarWebURL;	// IMP=0x00100000006d15ba
- (id)phobosURL;	// IMP=0x00100000006d1528
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;	// IMP=0x00100000006d1373
- (_Bool)isInternalUIKitURL;	// IMP=0x00100000006d1f91
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;	// IMP=0x0010000000bc221b
- (id)_NSItemProviderArchive_customArchiveDictionary;	// IMP=0x0010000000bc2174
@property(copy, nonatomic, setter=_setTitle:) NSString *_title;
@end
