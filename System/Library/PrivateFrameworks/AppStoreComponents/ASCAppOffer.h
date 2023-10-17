//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAdamID, NSArray, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ASCAppOffer : NSObject
{
    ASCAdamID *_id;	// 8 = 0x8
    NSDictionary *_titles;	// 16 = 0x10
    NSDictionary *_subtitles;	// 24 = 0x18
    long long _flags;	// 32 = 0x20
    NSNumber *_ageRating;	// 40 = 0x28
    NSArray *_metrics;	// 48 = 0x30
    NSString *_baseBuyParams;	// 56 = 0x38
    NSString *_metricsBuyParams;	// 64 = 0x40
    NSDictionary *_additionalHeaders;	// 72 = 0x48
    NSURL *_preflightPackageURL;	// 80 = 0x50
    NSString *_bundleID;	// 88 = 0x58
    NSString *_itemName;	// 96 = 0x60
    NSString *_vendorName;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000092af
- (void).cxx_destruct;	// IMP=0x000000000000abcd
@property(readonly, copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) NSURL *preflightPackageURL; // @synthesize preflightPackageURL=_preflightPackageURL;
@property(readonly, copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(readonly, copy, nonatomic) NSString *metricsBuyParams; // @synthesize metricsBuyParams=_metricsBuyParams;
@property(readonly, copy, nonatomic) NSString *baseBuyParams; // @synthesize baseBuyParams=_baseBuyParams;
@property(readonly, nonatomic) NSArray *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) NSNumber *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSDictionary *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, copy, nonatomic) NSDictionary *titles; // @synthesize titles=_titles;
@property(readonly, copy, nonatomic) ASCAdamID *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009fa7
@property(readonly) unsigned long long hash;
- (id)offerWithMetrics:(id)arg1;	// IMP=0x0000000000009af0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009ae5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009809
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000092b7
- (id)initWithID:(id)arg1 titles:(id)arg2 subtitles:(id)arg3 flags:(long long)arg4 ageRating:(id)arg5 metrics:(id)arg6 baseBuyParams:(id)arg7 metricsBuyParams:(id)arg8 additionalHeaders:(id)arg9 preflightPackageURL:(id)arg10 bundleID:(id)arg11 itemName:(id)arg12 vendorName:(id)arg13;	// IMP=0x0000000000009053

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

