//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSError, SSRentalCheckinRequest, TVHKRentalItem;

__attribute__((visibility("hidden")))
@interface TVHKStoreRentalCheckinOperation : TVHKAsynchronousOperation
{
    _Bool _success;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    TVHKRentalItem *_rentalItem;	// 24 = 0x18
    SSRentalCheckinRequest *_checkinRequest;	// 32 = 0x20
}

+ (id)new;	// IMP=0x00600000000b5c20
- (void).cxx_destruct;	// IMP=0x00000000000b628e
@property(retain, nonatomic) SSRentalCheckinRequest *checkinRequest; // @synthesize checkinRequest=_checkinRequest;
@property(readonly, copy, nonatomic) TVHKRentalItem *rentalItem; // @synthesize rentalItem=_rentalItem;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)cancel;	// IMP=0x00000000000b6198
- (void)executionDidBegin;	// IMP=0x00000000000b5e0f
- (id)initWithRentalItem:(id)arg1;	// IMP=0x00000000000b5cbe
- (id)init;	// IMP=0x00000000000b5c4f

@end

