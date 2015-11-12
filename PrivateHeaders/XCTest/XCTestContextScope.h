// Copyright 2004-present Facebook. All Rights Reserved.

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSMutableArray;

@interface XCTestContextScope : NSObject
{
    XCTestContextScope *_parentScope;
    NSMutableArray *_handlers;
}

@property (atomic, copy) NSMutableArray *handlers;
@property (atomic, readonly) XCTestContextScope *parentScope;
- (id)initWithParentScope:(id)arg1;
- (void)dealloc;

@end