//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADRequestDelayManager;

@protocol ADRequestDelayManagerDelegate <NSObject>
- (void)requestDelayManager:(ADRequestDelayManager *)arg1 didStopUnexpectly:(_Bool)arg2;
- (_Bool)requestDelayManager:(ADRequestDelayManager *)arg1 interruptedWithType:(long long)arg2;
@end

