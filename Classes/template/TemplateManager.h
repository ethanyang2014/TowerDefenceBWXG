//
//  TemplateManager.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-7.
//
//

#ifndef __TowerDefenceBWXG__TemplateManager__
#define __TowerDefenceBWXG__TemplateManager__

#include <iostream>

#include "Defines.h"

USING_NS_CC;

template <class ItemType>

class TemplateManager : public Node
{
protected:
    Vector<ItemType*> _item_types;
public:
    Vector<ItemType*>* getItemTypes()
    {
        return &_item_types;
    }
    
    void insert(ItemType *_item_type)
    {
        _item_types.pushBack(_item_type);
    }
    
    void insert(int index, ItemType *_item_type)
    {
        _item_types.insert(index, _item_type);
    }
    
    void remove(int index)
    {
        _item_types.erase(index);
    }
    
    void remove(ItemType *_item_type)
    {
        _item_types.eraseObject(_item_type);
    }
    
    void clear()
    {
        _item_types.clear();
    }
};


#endif /* defined(__TowerDefenceBWXG__TemplateManager__) */
