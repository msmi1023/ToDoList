//
//  ToDoItem.h
//  ToDoList
//
//  Created by tstone10 on 5/11/16.
//
//

#import <Foundation/Foundation.h>


@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
