//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSuggestion.h"

__attribute__((visibility("hidden")))
@interface UITextSuggestionWithAction : UITextSuggestion
{
    id _target;	// 64 = 0x40
    SEL _action;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000b8293d
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) id target; // @synthesize target=_target;
- (void)performActionWihSender:(id)arg1;	// IMP=0x0000000000b827c7

@end

