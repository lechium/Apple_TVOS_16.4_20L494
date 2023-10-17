//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/NSObject-Protocol.h>

@class UITextPosition, UITextRange;

@protocol UITextInputTokenizer <NSObject>
- (_Bool)isPosition:(UITextPosition *)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (UITextPosition *)positionFromPosition:(UITextPosition *)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(UITextPosition *)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (UITextRange *)rangeEnclosingPosition:(UITextPosition *)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
@end

