//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/PARBag.h>

@class NSString;

@interface PARBag (parsecd)
- (id)valueForKey:(id)arg1 shouldConsiderOverrides:(_Bool)arg2;	// IMP=0x00200000000e4650
- (id)valueForKey:(id)arg1 ofType:(Class)arg2;	// IMP=0x00100000000e44f0
- (id)findConfigForUserAgent:(id)arg1;	// IMP=0x00100000000e4350
- (id)rawConfig;	// IMP=0x00100000000e4200
@property(nonatomic, readonly) NSString *searchURLString;
@property(nonatomic, readonly) _Bool isExpired;
@end

