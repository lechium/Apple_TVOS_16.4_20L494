//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/NSCopying-Protocol.h>
#import <CardKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol CRCommand <NSObject, NSCopying>
@property(nonatomic) unsigned long long commandDirection;
@property(copy, nonatomic) NSDictionary *userInfo;
@end

