//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriTVUI/NSObject-Protocol.h>

@class NSArray;

@protocol SiriTVUITemplatedContainerViewDelegate <NSObject>
- (struct CGSize)calculateFittingSizeWithSize:(struct CGSize)arg1 andByIteratingRelevantSubviews:(NSArray *)arg2 withBlock:(double (^)(UIView<SiriTVUITemplateItemView> *, struct CGSize))arg3;
@end

