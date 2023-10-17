//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class NSArray;
@protocol HFHomeKitObject;

@protocol HFCompoundItemProtocol <HFHomeKitItemProtocol>
@property(readonly, nonatomic) id <HFHomeKitObject> primaryHomeKitObject;
@property(readonly, nonatomic) unsigned long long numberOfCompoundItems;
@property(readonly, nonatomic) _Bool isCompoundItem;

@optional
@property(readonly, nonatomic) NSArray *allHomeKitObjects;
@end

