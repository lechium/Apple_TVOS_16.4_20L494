//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary, NSOperationQueue, NSSet, NSString, NSValueTransformer;
@protocol TVCKStoreContentMetadataFetchOperationDelegate;

__attribute__((visibility("hidden")))
@interface TVCKStoreContentMetadataFetchOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    NSSet *_adamIDs;	// 16 = 0x10
    NSString *_keyProfile;	// 24 = 0x18
    long long _personalizationStyle;	// 32 = 0x20
    id <TVCKStoreContentMetadataFetchOperationDelegate> _delegate;	// 40 = 0x28
    NSValueTransformer *_lookupItemValueTransformer;	// 48 = 0x30
    NSDictionary *_lookupItemsByAdamID;	// 56 = 0x38
    NSOperationQueue *_requestQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000a5236
@property(retain, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSDictionary *lookupItemsByAdamID; // @synthesize lookupItemsByAdamID=_lookupItemsByAdamID;
@property(retain, nonatomic) NSValueTransformer *lookupItemValueTransformer; // @synthesize lookupItemValueTransformer=_lookupItemValueTransformer;
@property(nonatomic) __weak id <TVCKStoreContentMetadataFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long personalizationStyle; // @synthesize personalizationStyle=_personalizationStyle;
@property(readonly, copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(readonly, copy, nonatomic) NSSet *adamIDs; // @synthesize adamIDs=_adamIDs;
- (void)cancel;	// IMP=0x00000000000a50fd
- (void)start;	// IMP=0x00000000000a46d3
- (_Bool)isExecuting;	// IMP=0x00000000000a4697
- (_Bool)isFinished;	// IMP=0x00000000000a465b
- (_Bool)isConcurrent;	// IMP=0x00000000000a4653
@property(readonly, copy, nonatomic) NSArray *lookupItems;
- (id)lookupItemForAdamID:(id)arg1;	// IMP=0x00000000000a4580
- (void)_obtainedLookupItems:(id)arg1 withExpirationDate:(id)arg2;	// IMP=0x00000000000a44e4
- (id)init;	// IMP=0x00000000000a44b9
- (id)initWithAdamIDs:(id)arg1;	// IMP=0x00000000000a4497
- (id)initWithAdamIDs:(id)arg1 keyProfile:(id)arg2 personalizationStyle:(long long)arg3;	// IMP=0x00000000000a4382

@end

