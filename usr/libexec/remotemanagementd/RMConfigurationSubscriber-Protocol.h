//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;

@protocol RMConfigurationSubscriber <NSObject>
@property(readonly, copy, nonatomic) NSSet *configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)applyChangedConfigurationsTypes:(NSSet *)arg1;
@end

