//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExtensionFoundation/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol EXEnumeratorConfig <NSObject>
@property(readonly) NSDictionary *compatibilityExtensionPointAllowList;
@property(readonly) NSDictionary *legacyExtensionPointAllowList;
@property(readonly) NSURL *extensionPointsConfigURL;
@property(readonly) NSURL *xpcExtensionPointsCache;
@property(readonly) NSURL *xpcExtensionsCache;
@property(readonly) NSURL *rootURL;
@end

