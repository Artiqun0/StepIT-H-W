using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _7._1;
    public class OrderContext
    {
    private IOrderState currentState;

    public OrderContext()
    {
        currentState = new NewOrderState();
    }

    public void ProcessOrder()
    {
        currentState.ProcessOrder(this);
    }

    public void CancelOrder()
    {
        currentState.CancelOrder(this);
    }

    public void SetState(IOrderState state)
    {
        currentState = state;
    }
}

