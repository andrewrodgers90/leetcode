typedef struct s_bracket
{
    char c;
    struct s_bracket    *next;
}   t_bracket;

bool    isClosingBracket(char br)
{
    if (br == '}' || br == ']' || br == ')')
        return (true);
    return (false);
}

bool    isOpeningBracket(char br)
{
    if (br == '{' || br == '[' || br == '(')
        return (true);
    return (false);
}

void    removeLastNode(t_bracket **head)
{
    t_bracket   *secondLast;

    if ((*head)->next == NULL)
    {
        free (*head);
        *head = NULL;
        return ;
    }
    secondLast = *head;
    while (secondLast->next->next != NULL)
        secondLast = secondLast->next;
    free (secondLast->next);
    secondLast->next = NULL;
}

t_bracket   *getLastNode(t_bracket *head)
{
    t_bracket   *last;

    if (head == NULL)
        return (NULL);
    last = head;
    while (last->next != NULL)
        last = last->next;
    return (last);
}

bool    compareWithLastNode(t_bracket *head, char c)
{
    t_bracket   *lastNode;

    lastNode = getLastNode(head);
    if (lastNode == NULL)
        return (false);
    if (lastNode->c == '{' && c == '}')
        return (true);
    else if (lastNode->c == '[' && c == ']')
        return (true);
    else if (lastNode->c == '(' && c == ')')
        return (true);
    else
        return (false);
}

t_bracket   *newNode(char br)
{
    t_bracket   *new;

    new = (t_bracket *)malloc(sizeof(t_bracket));
    if (NULL == new)
        return (NULL);
    new->c = br;
    new->next = NULL;
    return (new);
}

void    addToList(t_bracket **head, t_bracket *node)
{
    t_bracket   *curr;

    curr = NULL;
    if (NULL == *head)
    {
        *head = node;
        return ;
    }
    curr = *head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = node;
}

int    processString(t_bracket *head, int i, char *s)
{

    return (0);
}

bool isValid(char* s)
{
    t_bracket   *head;
    int     i;

    i = 0;
    head = NULL;
    while (i < strlen(s))
    {    
        t_bracket   *node;
        
        if (isOpeningBracket(s[i]))
        {
            node = newNode(s[i]);
            addToList(&head, node);
        }
        else if (isClosingBracket(s[i]))
        {
            if (compareWithLastNode(head, s[i]))
                removeLastNode(&head);
            else
                return (false);
        }
        i++;
    }
    if (head == NULL)
        return (true);
    return (false);
}