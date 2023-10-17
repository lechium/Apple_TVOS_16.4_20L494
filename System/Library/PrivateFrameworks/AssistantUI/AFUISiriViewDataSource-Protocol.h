//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantUI/NSObject-Protocol.h>

@class AFAccount, AFUISiriView, NSString;

@protocol AFUISiriViewDataSource <NSObject>

@optional
- (long long)userAccountCountForSiriView:(AFUISiriView *)arg1;
- (AFAccount *)activeAccountForSiriView:(AFUISiriView *)arg1;
- (NSString *)assistantVersionForSiriView:(AFUISiriView *)arg1;
@end

