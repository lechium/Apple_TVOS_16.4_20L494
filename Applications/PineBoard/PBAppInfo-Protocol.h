//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBApplicationInfo, PBApplicationPlaceholder;

@protocol PBAppInfo <NSObject>
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo;
- (id)initWithApplicationPlaceholder:(PBApplicationPlaceholder *)arg1;
- (id)initWithApplicationInfo:(PBApplicationInfo *)arg1;
@end

