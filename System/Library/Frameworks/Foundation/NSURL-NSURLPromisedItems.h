//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (NSURLPromisedItems)
+ (id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000503406
+ (id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0010000000503198
+ (id)fileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;	// IMP=0x00100000005029eb
+ (id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00100000005027a8
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;	// IMP=0x0010000000502765
+ (id)fileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x0010000000502731
+ (id)fileURLWithPath:(id)arg1;	// IMP=0x0010000000502702
+ (id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x0010000000501899
+ (id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x0010000000501588
+ (id)URLWithString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x001000000050108b
+ (id)URLWithString:(id)arg1;	// IMP=0x0010000000501063
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000050001d
+ (id)fileURLWithPathComponents:(id)arg1;	// IMP=0x0010000000505518
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000505c5d
+ (id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000505e99
+ (id)_web_URLWithComponents:(CDStruct_4f05a0fa)arg1;	// IMP=0x001000000050b860
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x001000000050b847
+ (id)_URLWithData:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x001000000050c94e
+ (id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x001000000050c8f1
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000005212fa
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000520ebe
+ (id)readableTypeIdentifiersForItemProvider;	// IMP=0x0010000000520d56
- (id)promisedItemResourceValuesForKeys:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000447c95
- (_Bool)getPromisedItemResourceValue:(out id *)arg1 forKey:(id)arg2 error:(out id *)arg3;	// IMP=0x00100000004477b8
- (id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000447690
- (_Bool)checkPromisedItemIsReachableAndReturnError:(id *)arg1;	// IMP=0x0010000000447418
- (id)_fixedUpSideFaultError:(id)arg1;	// IMP=0x00100000004472bd
- (void)_performWithPhysicalURL:(CDUnknownBlockType)arg1;	// IMP=0x0010000000447195
- (void)_promiseExtensionRelease:(long long)arg1;	// IMP=0x0010000000447181
- (long long)_promiseExtensionConsume;	// IMP=0x0010000000447141
- (_Bool)hasDirectoryPath;	// IMP=0x0010000000504ead
- (_Bool)isFileURL;	// IMP=0x0010000000504dee
- (id)fragment;	// IMP=0x0010000000504d22
- (id)query;	// IMP=0x0010000000504c56
- (id)parameterString;	// IMP=0x0010000000504a6e
- (id)path;	// IMP=0x0010000000504987
- (id)relativePath;	// IMP=0x00100000005048bb
- (id)password;	// IMP=0x0010000000504755
- (id)user;	// IMP=0x001000000050468b
- (id)port;	// IMP=0x00100000005045ad
- (id)host;	// IMP=0x00100000005044e3
- (id)standardizedURL;	// IMP=0x00100000005040be
- (id)absoluteURL;	// IMP=0x0010000000503ff4
- (id)absoluteString;	// IMP=0x0010000000503f0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000503f00
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000050391f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000050367e
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000503449
- (id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000005031f1
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0010000000502e21
- (const char *)fileSystemRepresentation;	// IMP=0x0010000000502b02
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0010000000502a2e
- (id)initFileURLWithFileSystemRepresentation:(const char *)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;	// IMP=0x00100000005027dc
- (id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00100000005022eb
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2 relativeToURL:(id)arg3;	// IMP=0x0010000000501ee1
- (id)initFileURLWithPath:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x0010000000501c92
- (id)initFileURLWithPath:(id)arg1;	// IMP=0x00100000005019f2
- (id)dataRepresentation;	// IMP=0x00100000005018cd
- (id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00100000005015bc
- (id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x00100000005012c7
- (id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3;	// IMP=0x00100000005010c7
- (id)initWithString:(id)arg1;	// IMP=0x0010000000501077
- (id)init;	// IMP=0x0010000000500f80
- (id)resourceSpecifier;	// IMP=0x0010000000500d75
- (_Bool)_isAbsolute;	// IMP=0x0010000000500d39
- (id)scheme;	// IMP=0x0010000000500c6f
- (id)baseURL;	// IMP=0x0010000000500b9c
- (id)relativeString;	// IMP=0x0010000000500ac9
- (void)dealloc;	// IMP=0x0010000000500a1d
- (void)_freeClients;	// IMP=0x0010000000500945
- (struct __CFDictionary *)_clientsCreatingIfNecessary:(_Bool)arg1;	// IMP=0x001000000050085c
- (struct __CFURL *)_cfurl;	// IMP=0x001000000050080c
- (id)initWithString:(id)arg1 relativeToURL:(id)arg2;	// IMP=0x0010000000500609
- (unsigned long long)_cfTypeID;	// IMP=0x00100000005005ff
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0010000000500560
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x00100000005004c1
- (_Bool)_isDeallocating;	// IMP=0x00100000005003fe
- (_Bool)_tryRetain;	// IMP=0x001000000050033a
- (unsigned long long)retainCount;	// IMP=0x001000000050025e
- (oneway void)release;	// IMP=0x001000000050018b
- (id)retain;	// IMP=0x00100000005000cb
@property(readonly, copy) NSURL *URLByResolvingSymlinksInPath;
@property(readonly, copy) NSURL *URLByStandardizingPath;
@property(readonly, copy) NSURL *URLByDeletingPathExtension;
- (id)URLByAppendingPathExtension:(id)arg1;	// IMP=0x00100000005059ff
@property(readonly, copy) NSURL *URLByDeletingLastPathComponent;
- (id)URLByAppendingPathComponent:(id)arg1;	// IMP=0x0010000000505702
- (id)URLByAppendingPathComponent:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x001000000050567a
@property(readonly, copy) NSString *pathExtension;
@property(readonly, copy) NSString *lastPathComponent;
@property(readonly, copy) NSArray *pathComponents;
- (id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000505c65
- (_Bool)_web_isJavaScriptURL;	// IMP=0x001000000050c2fc
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;	// IMP=0x001000000050c0b4
- (id)_web_scriptIfJavaScriptURL;	// IMP=0x001000000050c043
- (CDStruct_4f05a0fa)_web_URLComponents;	// IMP=0x001000000050b9ed
- (id)_hostString;	// IMP=0x001000000050ca2e
- (id)_URLByEscapingSpacesAndControlChars;	// IMP=0x001000000050c713
- (id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;	// IMP=0x001000000050c57e
- (id)_web_URLByRemovingUserAndPath_nowarn;	// IMP=0x001000000050c498
- (id)_web_URLByRemovingLastPathComponent_nowarn;	// IMP=0x001000000050c327
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000005213d2
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)_URLArchive;	// IMP=0x0010000000520dad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;
@end

