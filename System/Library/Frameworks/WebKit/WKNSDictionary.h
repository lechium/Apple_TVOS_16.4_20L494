//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKNSDictionary : NSDictionary
{
    struct ObjectStorage<API::Dictionary> _dictionary;	// 8 = 0x8
}

@property(readonly) struct Object *_apiObject;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014b8cf
- (id)keyEnumerator;	// IMP=0x000000000014b83c
- (id)objectForKey:(id)arg1;	// IMP=0x000000000014b69b
- (unsigned long long)count;	// IMP=0x000000000014b67d
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000014b64e
- (void)dealloc;	// IMP=0x000000000014b5ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
