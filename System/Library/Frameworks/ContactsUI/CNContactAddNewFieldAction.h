//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactAddNewFieldAction : CNContactAction
{
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017770
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000175c3

@end

