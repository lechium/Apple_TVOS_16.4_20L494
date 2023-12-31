//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKVOBlockHelper : NSObject
{
    id _observedObject;	// 8 = 0x8
    NSMutableDictionary *_tokensByContext;	// 16 = 0x10
    long long _nextIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000118f4
@property(nonatomic) long long nextIdentifier; // @synthesize nextIdentifier=_nextIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *tokensByContext; // @synthesize tokensByContext=_tokensByContext;
@property(readonly, nonatomic) __weak id observedObject; // @synthesize observedObject=_observedObject;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001178d
- (id)insertNewTokenForKeyPath:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001165b
- (void)removeHandlerForKey:(id)arg1;	// IMP=0x00000000000115c4
- (id)allKVOObservers;	// IMP=0x0000000000011522
- (void)dump;	// IMP=0x00000000000113aa
- (id)debugDescription;	// IMP=0x00000000000112c9
- (void)dealloc;	// IMP=0x00000000000110af
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001104b

@end

