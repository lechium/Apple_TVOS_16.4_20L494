//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CKKSMemoryKeyCache : NSObject
{
    NSMutableDictionary *_keyCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000017402d
@property(retain) NSMutableDictionary *keyCache; // @synthesize keyCache=_keyCache;
- (id)currentKeyForClass:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000173f22
- (id)loadKeyForItem:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000173e4a
- (id)loadKeyForUUID:(id)arg1 contextID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000173d1d
- (id)init;	// IMP=0x0010000000173cb7

@end

