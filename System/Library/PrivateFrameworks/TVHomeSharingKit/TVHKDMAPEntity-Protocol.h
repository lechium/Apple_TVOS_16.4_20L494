//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVHomeSharingKit/NSObject-Protocol.h>

@class NSDictionary, NSNumber;

@protocol TVHKDMAPEntity <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) unsigned long long protocol;
@property(readonly, nonatomic) unsigned long long type;
- (void)prepopulateAttributeValues;
- (void)setAttributeValue:(id)arg1 forCode:(NSNumber *)arg2;
- (id)attributeValueForCode:(NSNumber *)arg1;
@end
