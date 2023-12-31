//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GEOMAResourceInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_queryParameters;	// 16 = 0x10
}

+ (id)baseURLForType:(unsigned long long)arg1;	// IMP=0x00400000000365a1
+ (id)maResourcesFolder;	// IMP=0x0010000000036537
- (void).cxx_destruct;	// IMP=0x0020000000037aef
- (id)description;	// IMP=0x0010000000037845
- (void)_listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x00100000000371b2
- (void)listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037082
- (id)installedResources;	// IMP=0x0010000000036b9e
- (id)query;	// IMP=0x0010000000036960
- (id)_backgroundDownloadOptions;	// IMP=0x0010000000036906
- (_Bool)isExpired;	// IMP=0x001000000003681b
- (void)updateLastAccessedTime;	// IMP=0x00100000000367cc
- (double)lastAccessedTime;	// IMP=0x0010000000036649
- (id)baseURL;	// IMP=0x0010000000036621
- (id)initWithType:(unsigned long long)arg1 overrides:(id)arg2;	// IMP=0x0010000000036363

@end

