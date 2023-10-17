//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemMapper, NSNumber, NSString;

@interface KMPortraitEntitiesBridge : NSObject
{
    KVItemMapper *_itemMapper;	// 8 = 0x8
    NSNumber *_alternativeItemIdKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000501c
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004d8c
- (id)originAppId;	// IMP=0x0000000000004d78
- (long long)itemType;	// IMP=0x0000000000004d62
- (id)init;	// IMP=0x0000000000004bfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
