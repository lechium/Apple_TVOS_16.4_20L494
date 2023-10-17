//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFNotifyObserver;

@protocol AFNotifyObserverDelegate <NSObject>

@optional
- (void)notifyObserver:(AFNotifyObserver *)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)notifyObserver:(AFNotifyObserver *)arg1 didReceiveNotificationWithToken:(int)arg2;
@end

