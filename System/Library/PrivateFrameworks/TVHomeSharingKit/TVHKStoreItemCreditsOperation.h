//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, NSOperation, NSString, TVHKStoreItemCredits;

__attribute__((visibility("hidden")))
@interface TVHKStoreItemCreditsOperation : TVHKAsynchronousOperation
{
    unsigned long long _storeID;	// 8 = 0x8
    unsigned long long _storefrontID;	// 16 = 0x10
    TVHKStoreItemCredits *_credits;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    unsigned long long _mediaCategoryType;	// 48 = 0x30
    NSOperation *_productOperation;	// 56 = 0x38
}

+ (id)_contributorsFromStoreCredits:(id)arg1;	// IMP=0x006000000005c753
+ (id)new;	// IMP=0x006000000005bf7a
- (void).cxx_destruct;	// IMP=0x000000000005cb74
@property(retain, nonatomic) NSOperation *productOperation; // @synthesize productOperation=_productOperation;
@property(readonly, nonatomic) unsigned long long mediaCategoryType; // @synthesize mediaCategoryType=_mediaCategoryType;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) TVHKStoreItemCredits *credits; // @synthesize credits=_credits;
@property(nonatomic) unsigned long long storefrontID; // @synthesize storefrontID=_storefrontID;
@property(nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000005c3be
- (void)cancel;	// IMP=0x000000000005c340
- (void)executionDidBegin;	// IMP=0x000000000005c0a4
- (id)initWithItemTitle:(id)arg1 mediaCategoryType:(unsigned long long)arg2;	// IMP=0x000000000005c018
- (id)init;	// IMP=0x000000000005bfa9

@end

