//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSDate;

@protocol GEOServerCondition <NSObject, NSCoding>
@property(readonly, nonatomic) NSArray *subconditions;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) long long conditionType;
@end

